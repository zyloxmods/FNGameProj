#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortItemViewSettings.h"
#include "ItemPreviewScene.generated.h"

class AFortCameraTargetPedestal;
class UChildActorComponent;
class UFortAccountItemDefinition;

UCLASS(Blueprintable)
class AItemPreviewScene : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UChildActorComponent* FocusCameraTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortCameraTargetPedestal* FocusCameraTargetPedestal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortCameraTargetPedestal*> BackgroundCameraTargetPedestals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortItemViewSettings ItemViewSettings;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFortCameraTargetPedestal>> PedestalsLoading;
    
public:
    AItemPreviewScene();
private:
    UFUNCTION(BlueprintCallable)
    void HandleItemShown(const UFortAccountItemDefinition* ItemViewed, AFortCameraTargetPedestal* Pedestal);
    
};

