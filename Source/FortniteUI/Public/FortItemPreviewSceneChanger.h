#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortUICameraPositionTargetInterface.h"
#include "GameplayTagContainer.h"
#include "SceneTransitionOptions.h"
#include "FortItemPreviewSceneChanger.generated.h"

class AItemPreviewScene;
class UCameraComponent;
class UChildActorComponent;
class UFortAccountItemDefinition;
class USceneComponent;

UCLASS(Blueprintable)
class AFortItemPreviewSceneChanger : public AActor, public IFortUICameraPositionTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraComponent* TransitionCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UChildActorComponent* PrimarySceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UChildActorComponent* SecondarySceneComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SceneChangerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasEtherealBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneChangeRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AItemPreviewScene* PrimaryScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AItemPreviewScene* SecondaryScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AItemPreviewScene* SceneTransitioningTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AItemPreviewScene* ActiveScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ZoomLevel;
    
public:
    AFortItemPreviewSceneChanger();
protected:
    UFUNCTION(BlueprintCallable)
    void TickZoomLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetZoomLevelSet(float TargetZoomLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewSceneRequested(const UFortAccountItemDefinition* PrimaryRequestedItem, const FSceneTransitionOptions& TransitionOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSoundEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    AItemPreviewScene* GetSceneTransitioningTo();
    
    UFUNCTION(BlueprintCallable)
    AItemPreviewScene* GetPrimaryScene();
    
    UFUNCTION(BlueprintCallable)
    AItemPreviewScene* GetActiveScene();
    
    
    // Fix for true pure virtual functions not being implemented
};

