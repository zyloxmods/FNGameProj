#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Camera/CameraActor.h"
#include "FortCameraBase.generated.h"

class AFortExhibitActor;
class AFortPlayerController;

UCLASS(Blueprintable)
class AFortCameraBase : public ACameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToDrag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefaultFieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator DefaultRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DefaultLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortExhibitActor* ExhibitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bExhibitActorChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CheckForDragBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D DownDelta;
    
public:
    AFortCameraBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDragEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDragBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivated(AFortPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivated(AFortPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Exhibit(AFortExhibitActor* TargetActor);
    
};

