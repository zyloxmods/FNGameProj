#pragma once
#include "CoreMinimal.h"
#include "AthenaBaseStatView.h"
#include "AthenaWeaponStatView.generated.h"

class UFortWeaponItemDefinition;

UCLASS(Blueprintable)
class UAthenaWeaponStatView : public UAthenaBaseStatView {
    GENERATED_BODY()
public:
    UAthenaWeaponStatView();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWeaponItemDefinition* GetWeaponDefinition() const;
    
};

