
#ifndef EVOLUTION_SIMULATOR_H
#define EVOLUTION_SIMULATOR_H

class EvolutionSimulator
{
	private:
		int population_size; 
		int generations;
		float mutation_rate;
		float survival_rate;
		float fertility_rate;
	public:
		EvolutionSimulator();
		int getPopulationSize();
		int getGenerations();
		float getMutationRate();
		float getSurvivalRate();
		float getFertilityRate();
}

