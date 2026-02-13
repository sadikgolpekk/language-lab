package com.example.lab8.uygulama;

public class CubeBody extends Body {
    public double edge =1.0;
    public CubeBody(double edge){
        super(edge);
        this.edge=edge;
    }
    public double getVolume(){
        return edge*edge*edge;
    }
}