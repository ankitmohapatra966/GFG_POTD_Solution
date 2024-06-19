class Solution {
  public:
    double maxVolume(double perimeter, double area) {
        
        double length = (perimeter - sqrt((perimeter*perimeter) - 24*area))/12;
        double height = perimeter/4-2*length;
        return length*length*height;
    }
};
