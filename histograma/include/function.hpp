#ifndef FUNCTION_H
#define FUNCTION_H

#include <utility>
#include <vector>

/*! 
 * Computa e retorna um histograma no formato especificado. Veja que essa função só funciona
 * se os dados de V forem inteiros!
 *
 * @param V um vetor de dados quaisquer
 *
 * @return um vetor contendo pares representando o histograma dos dados
 */

std::vector<std::pair<int, int>> histograma(std::vector<int> V);

/*declare as assinaturas das funções aqui!*/

#endif
