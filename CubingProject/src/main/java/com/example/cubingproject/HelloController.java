package com.example.cubingproject;

import javafx.animation.KeyFrame;
import javafx.animation.Timeline;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.fxml.FXML;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.ListView;
import javafx.scene.control.TextField;
import javafx.scene.layout.VBox;
import javafx.scene.text.Text;
import javafx.util.Duration;

import java.util.ArrayList;

public class HelloController {

    @FXML
    Button sButton, rButton;

    @FXML
    Label text;

    @FXML
    ListView list;


    Timeline timeline;
    int mins = 0, secs = 0, millis = 0;
    boolean sos = true;
    String tempTime;
    int counting = 0;

    ArrayList<Integer> averageTimes = new ArrayList<Integer>();
    int tempMins;
    int tempSecs;
    int tempMillis;
    int average;
    int minTime;
    int maxTime;

    public void HelloController(){

    }

    @FXML
    private void initialize()
    {
        text.setFocusTraversable(false);
        sButton.setFocusTraversable(false);
        rButton.setFocusTraversable(false);
        list.setFocusTraversable(false);

        text.setText("00:00:000");
        timeline = new Timeline(new KeyFrame(Duration.millis(1), (ActionEvent event) -> {
            change(text);
        }));
        timeline.setCycleCount(Timeline.INDEFINITE);
        timeline.setAutoReverse(false);
    }


    public void change(Label text) {
        if(millis == 1000) {
            secs++;
            millis = 0;
        }
        if(secs == 60) {
            mins++;
            secs = 0;
        }
        tempTime = (((mins/10) == 0) ? "0" : "") + mins + ":"
                + (((secs/10) == 0) ? "0" : "") + secs + ":"
                + (((millis/10) == 0) ? "00" : (((millis/100) == 0) ? "0" : "")) + millis++;
        text.setText(tempTime);
    }




        public void start() { //on action
            if (sos) {
                timeline.play();
                sos = false;
                sButton.setText("Stop");
            } else {
                if(counting == 0){
                    maxTime = mins * 60000 + secs * 1000 + millis;
                    minTime = mins * 60000 + secs * 1000 + millis;
                }else{
                    averageTimes.add(mins * 60000 + secs * 1000 + millis);

                    if (counting <= 4){
                        list.getItems().add(counting + ". " + tempTime + " (avg of 5): --");
                    }
                    else {
                        average = ((averageTimes.get(counting) + averageTimes.get(counting-1) + averageTimes.get(counting-2) + averageTimes.get(counting-3) + averageTimes.get(counting-4) - (maxTime + minTime))/3);
                        tempMins = (average / 1000) / 60;
                        tempSecs = (average / 1000) % 60;
                        tempMillis = average;
                        list.getItems().add(counting+1 + ". " + tempTime + " (avg of 5): " + (((tempMins/10) == 0) ? "0" : "") + tempMins + ":"
                                + (((tempSecs/10) == 0) ? "0" : "") + tempSecs + ":"
                                + (((tempMillis/10) == 0) ? "00" : (((tempMillis/100) == 0) ? "0" : "")));
                    }
                }
                //----------------------
                if((mins * 60000 + secs * 1000 + millis) < minTime){
                    minTime = mins * 60000 + secs * 1000 + millis;
                }
                if((mins * 60000 + secs * 1000 + millis) > maxTime){
                    maxTime = mins * 60000 + secs * 1000 + millis;
                }
                counting++;
                tempTime = "";
                timeline.pause();
                sos = true;
                sButton.setText("Start");
                handle();
            }
        }

    public void handle() {
        mins = 0;
        secs = 0;
        millis = 0;
        timeline.pause();
        //text.setText("00:00:000");
        if(!sos) {
            sos = true;
            sButton.setText("Start");
        }
    }

}


