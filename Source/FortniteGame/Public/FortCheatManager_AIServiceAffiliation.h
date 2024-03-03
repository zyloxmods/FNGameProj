#pragma once
#include "CoreMinimal.h"
#include "ChildCheatManager.h"
#include "FortCheatManager_AIServiceAffiliation.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_AIServiceAffiliation : public UChildCheatManager {
    GENERATED_BODY()
public:
    UFortCheatManager_AIServiceAffiliation();
    UFUNCTION(BlueprintCallable, Exec)
    void ResetFactionRelations();
    
};

