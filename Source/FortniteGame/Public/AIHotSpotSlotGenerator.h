#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "AIHotSpotSlotGenerator.generated.h"

class AAIHotSpot;
class UAIHotSpotSlot;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAIHotSpotSlotGenerator : public UObject {
    GENERATED_BODY()
public:
    UAIHotSpotSlotGenerator();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIHotSpot* GetHotSpot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GenerateSlots();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIHotSpotSlot* AddSlot(const FVector& RelativeLocation, const FRotator& RelativeRotation, TSubclassOf<UAIHotSpotSlot> CustomSlotClass, bool bEnabled) const;
    
};

