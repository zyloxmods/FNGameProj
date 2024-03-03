#pragma once
#include "CoreMinimal.h"
#include "FortItemPreviewSingleAngleActor.h"
#include "FortItemPreviewOffPawnActor.generated.h"

class UChildActorComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class AFortItemPreviewOffPawnActor : public AFortItemPreviewSingleAngleActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* PreviewActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PreviewStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PreviewSkelMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseItemDefConfiguredLocation;
    
public:
    AFortItemPreviewOffPawnActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetPreviewIcon() const;
    
};

