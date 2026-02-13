package com.example.lab8;

import java.util.Vector;

import com.example.lab8.uygulama.Body;
import com.example.lab8.uygulama.CubeBody;
import com.example.lab8.uygulama.SphereBody;
public class test {
    public static void main(String[] args) {
        Vector <Body> bodies = new Vector<Body>();
        bodies.add(new SphereBody(5, 1));
        bodies.add(new CubeBody(10));

        for(Body body:bodies){
            System.out.println("Volume: "+body.getVolume());
            System.out.println("Mass: "+body.getMass());
        }


    }
}