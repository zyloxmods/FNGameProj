#pragma once
#include "CoreMinimal.h"
#include "MutatorPlayerSettingsData.generated.h"

class UFortPlayerSettingsComponentBase;

USTRUCT(BlueprintType)
struct FMutatorPlayerSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerSettingsComponentBase* ScopeSettings;
    
    FORTNITEGAME_API FMutatorPlayerSettingsData();
};

