#pragma once
#include "CoreMinimal.h"
#include "FortPlayerControllerPvE.h"
#include "FortPlayerControllerFOB.generated.h"

class ABuildingFOBConfigActor;
class UFortFOBCoreDecoItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerControllerFOB : public AFortPlayerControllerPvE {
    GENERATED_BODY()
public:
    AFortPlayerControllerFOB();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSaveFOB(ABuildingFOBConfigActor* FOBToSave);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Reliable, Server, WithValidation)
    void ServerResetFOB(ABuildingFOBConfigActor* FOBToReset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReloadFOB(ABuildingFOBConfigActor* FOBToReload);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAttemptSelectFOBCore(ABuildingFOBConfigActor* FOBToSelectOn, UFortFOBCoreDecoItemDefinition* DefToSelect);
    
};

