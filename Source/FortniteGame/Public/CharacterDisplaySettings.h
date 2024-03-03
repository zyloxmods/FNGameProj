#pragma once
#include "CoreMinimal.h"
#include "CharacterDisplaySettings.generated.h"

class UFortAccountItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FCharacterDisplaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortAccountItemDefinition> PrimaryItem;
    
    FCharacterDisplaySettings();
};

