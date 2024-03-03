#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AthenaSpatialScreen.h"
#include "AthenaSpatialItemPreviewScreen.generated.h"

class UAnimationAsset;
class UFortItemView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpatialItemPreviewScreen : public UAthenaSpatialScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortItemView* ItemViewObject;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemPreviewActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ItemPreviewRotateInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableItemPreviewRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* IdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
public:
    UAthenaSpatialItemPreviewScreen();
};

