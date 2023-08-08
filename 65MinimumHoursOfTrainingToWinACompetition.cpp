class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int i;
        int totalHours=0;
        for(i=0;i<energy.size();i++)
        {
            if(initialEnergy<=energy[i] || initialExperience<=experience[i])
            {
                if(initialEnergy<=energy[i])
                {
                    totalHours=totalHours+(energy[i]-initialEnergy+1);
                    initialEnergy=1;
                }
                else
                {
                     initialEnergy=initialEnergy-energy[i];
                }
                if(initialExperience<=experience[i])
                {
                     int diff=(experience[i]-initialExperience+1);
                     totalHours=totalHours+diff;
                     initialExperience=initialExperience+diff+experience[i];
                }
                else
                {
                    initialExperience=initialExperience+experience[i];
                } 
            }
            else
            {
                initialExperience=initialExperience+experience[i];
                initialEnergy=initialEnergy-energy[i];
            }
        }
        return totalHours;
    }
};
