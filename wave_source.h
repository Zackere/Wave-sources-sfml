#ifndef WAVE_SOURCE_H
#define WAVE_SOURCE_H

class wave_source
{
    double xpos;
    double ypos;
    double time = 0;
    double k;
    double omega;
public:
    wave_source(double x, double y, double _k, double _omega):xpos(x), ypos(y), k(_k), omega(_omega) {}
    double getxpos() { return xpos; }
    double getypos() { return ypos; }
    double& gettime() { return time; }
    double getk() { return k; }
    double getomega() { return omega; }
};

#endif
