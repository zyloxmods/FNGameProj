#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_CustomCharacterParts.h"
#include "FortAthenaMutator_FactionCustomCharacterParts.generated.h"

class AFortPlayerControllerAthena;

UCLASS(Abstract, Blueprintable, HideDropdown)
class FORTNITEGAME_API AFortAthenaMutator_FactionCustomCharacterParts : public AFortAthenaMutator_CustomCharacterParts {
    GENERATED_BODY()
public:
    AFortAthenaMutator_FactionCustomCharacterParts();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 GetFactionForPlayer(const AFortPlayerControllerAthena* PlayerController);
    
};

