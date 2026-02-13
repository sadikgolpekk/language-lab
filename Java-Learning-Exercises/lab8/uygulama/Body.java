package com.example.lab8.uygulama;

public abstract class Body {
    public double density=1.0;
    public Body(double density){
        this.density=density;
    }
    public double getDensity(){
        return density;
    }
    public abstract double getVolume();
    
    public double getMass(){
        return getVolume()*density;

    }

}