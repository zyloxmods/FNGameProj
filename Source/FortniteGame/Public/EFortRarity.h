#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.generated.h"

UENUM(BlueprintType)
enum class EFortRarity : uint8
{
    Handmade = 1 UMETA(DisplayName = "Common (Grey)"),
    Ordinary = 0 UMETA(DisplayName = "Uncommon (Green)"),
    Sturdy = 2 UMETA(DisplayName = "Rare (Blue)"),
    Quality = 3 UMETA(DisplayName = "Epic (Purple)"),
    Fine = 4 UMETA(DisplayName = "Legendary (Orange)"),
    Elegant = 5 UMETA(DisplayName = "Mythic (Yellow)"),
    Masterwork = 6 UMETA(DisplayName = "Transcendent (Pinkish)"),
    Epic = 7 UMETA(DisplayName = "Impossible (T07)"),
    Badass = 8 UMETA(DisplayName = "Impossible (T08)"),
    Legendary = 9 UMETA(DisplayName = "Impossible (T09)"),
    NumRarityValues = 10 UMETA(Hidden),
    EFortRarity_MAX = 11 UMETA(Hidden),
};

