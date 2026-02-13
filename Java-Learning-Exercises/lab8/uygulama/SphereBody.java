package com.example.lab8.uygulama;

public class SphereBody extends Body {
    public double radius =1.0;
    public SphereBody(double radius, double density){
        super(density);
        this.radius=radius;
    }
    public double getVolume(){
        return 4.0/3.0*Math.PI*radius*radius*radius;
    }
}