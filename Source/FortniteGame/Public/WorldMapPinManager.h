#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortInitializationInterface.h"
#include "WorldMapPinManager.generated.h"

class AFortStaticMeshActor;
class AWorldMapPin;

UCLASS(Blueprintable)
class AWorldMapPinManager : public AActor, public IFortInitializationInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortStaticMeshActor* WorldMapMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AWorldMapPin*> CurrentPins;
    
public:
    AWorldMapPinManager();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AWorldMapPin* CreateWorldMapPin(const FString& TheaterId);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
};

