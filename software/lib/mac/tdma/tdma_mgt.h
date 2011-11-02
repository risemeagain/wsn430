/*
 * Copyright  2008-2009 INRIA/SensTools
 * 
 * <dev-team@sentools.info>
 * 
 * This software is a set of libraries designed to develop applications
 * for the WSN430 embedded hardware platform.
 * 
 * This software is governed by the CeCILL license under French law and
 * abiding by the rules of distribution of free software.  You can  use, 
 * modify and/ or redistribute the software under the terms of the CeCILL
 * license as circulated by CEA, CNRS and INRIA at the following URL
 * "http://www.cecill.info". 
 * 
 * As a counterpart to the access to the source code and  rights to copy,
 * modify and redistribute granted by the license, users are provided only
 * with a limited warranty  and the software's author,  the holder of the
 * economic rights,  and the successive licensors  have only  limited
 * liability. 
 * 
 * In this respect, the user's attention is drawn to the risks associated
 * with loading,  using,  modifying and/or developing or reproducing the
 * software by the user in light of its specific status of free software,
 * that may mean  that it is complicated to manipulate,  and  that  also
 * therefore means  that it is reserved for developers  and  experienced
 * professionals having in-depth computer knowledge. Users are therefore
 * encouraged to load and test the software's suitability as regards their
 * requirements in conditions enabling the security of their systems and/or 
 * data to be ensured and,  more generally, to use and operate it in the 
 * same conditions as regards security. 
 * 
 * The fact that you are presently reading this means that you have had
 * knowledge of the CeCILL license and that you accept its terms.
 */

/**
 * \file
 * \brief Header file for node attachement management module
 * \author Clément Burin des Roziers <clement.burin-des-roziers@inrialpes.fr>
 * \date November 2009
 */

#ifndef _TDMA_MGT_H_
#define _TDMA_MGT_H_

#define ADDR_MASK 0x0F
#define GET_ADDR(u) (u&ADDR_MASK)

/**
 * Initialize the slot management mechanism
 */
void tdma_mgt_init(void);

/**
 * Proceed an attach request
 * \param node_addr the node address requesting attachement
 * \return the slot number allocated, or -1 if not possible
 */
int16_t tdma_mgt_attach(uint8_t node_addr);

/**
 * Get the node address associated with a slot ID.
 * \param slot the slot number
 * \return the corresponding node address
 */
uint8_t tdma_mgt_getaddr(int16_t slot);

#endif
