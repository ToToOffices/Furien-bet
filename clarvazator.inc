#if defined _knife_wallhack_included
  #endinput
#endif
#define _knife_wallhack_included

/**
 * Acordă beneficiul de Knife Wallhack jucătorului specficat.
 * 
 * @param id        ID-ul jucătorului.
 * @return          1 dacă a reuşit, 0 altfel.
 */
native give_knife_wallhack(id);

/**
 * Elimină beneficiul de Knife Wallhack jucătorului specficat.
 * 
 * @param id        ID-ul jucătorului.
 * @return          1 dacă a reuşit, 0 altfel.
 */
native remove_knife_wallhack(id);
