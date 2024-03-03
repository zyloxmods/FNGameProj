#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortHomeTeleporterInterface.generated.h"

class AActor;
class AFortPlayerPawn;

UINTERFACE(Blueprintable)
class UFortHomeTeleporterInterface : public UInterface {
    GENERATED_BODY()
};

class IFortHomeTeleporterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnHomeTeleporterUnboundServer(AFortPlayerPawn* PlayerPawn, const AActor* NewHomeActor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnHomeTeleporterUnbound(AFortPlayerPawn* PlayerPawn, const AActor* NewHomeActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnHomeTeleporterBoundServer(AFortPlayerPawn* PlayerPawn, const AActor* OldHomeActor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnHomeTeleporterBound(AFortPlayerPawn* PlayerPawn, const AActor* OldHomeActor);
    
};

