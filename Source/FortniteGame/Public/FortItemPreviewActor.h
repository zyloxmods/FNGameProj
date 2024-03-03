#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharacterDisplaySettings.h"
#include "FortUICameraPositionTargetInterface.h"
#include "FortItemPreviewActor.generated.h"

class UMaterialInstance;
class UMaterialInterface;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API AFortItemPreviewActor : public AActor, public IFortUICameraPositionTargetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* SpecialEventMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCharacterDisplaySettings CurrentDisplayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ItemPreviewRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* UserRotationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomLevel;
    
public:
    AFortItemPreviewActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetFloorMaterial(UMaterialInterface* InMaterialInstance);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviewVisualsSpawned();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurrentVisualsCleanedUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllLODStreamingComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ArePreviewVisualsReady() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

