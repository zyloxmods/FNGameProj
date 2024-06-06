#include "FortHero.h"

bool UFortHero::IsLevelClamped() const {
    return false;
}

bool UFortHero::IsInExpeditionSquad() const {
    return false;
}

int32 UFortHero::GetUnclampedLevel() const {
    return 0;
}

UFortHeroType* UFortHero::GetHeroTypeBP() const {
    return NULL;
}

UFortHero::UFortHero() {
    hero_name = TEXT("Default Hero Name");
    Refundable = false;
}

