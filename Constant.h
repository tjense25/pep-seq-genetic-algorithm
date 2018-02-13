#ifndef Constant_H
#define Constants_H

static int const PEP_LENGTH = 8; //Length of peptides are 8 amino acids
static int const DEFAULT_MOTIF_SIZE = 4; //Motifs by default specify 4 AAs
static int const POPULATION_SIZE = 1000;
static int const GENERATIONS = 1000; //repeat genetic algorithm for this many gens
static float const MUTATION_RATE = 0.05; // % chance an indiv. in pop will mutate
static int const PEP_POSITIONS[] = {0, 1, 2, 3, 4, 5, 6, 7};
static char const RESIUDES[] = "ACDEFGHIKLMNPQRSTVWY"; //all 20 AA symbols

#endif
