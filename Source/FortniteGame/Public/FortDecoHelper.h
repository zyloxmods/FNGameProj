#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "DecoPlacementState.h"
#include "EBuildingAttachmentType.h"
#include "EFortDecoPlacementQueryResults.h"
#include "EPlacementType.h"
#include "Templates/SubclassOf.h"
#include "FortDecoHelper.generated.h"

class ABuildingActor;
class AFortDecoPreview;
class AFortDecoTool;
class UFortDecoItemDefinition;

UCLASS(Blueprintable)
class AFortDecoHelper : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortDecoPreview* DecoPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingActor> PlacementActorClass;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortDecoTool> DecoTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecoToolReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingAttachmentType CurrentAttachmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPlacementType::Type> CurrentPlacementType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortDecoItemDefinition* DecoItemDefinition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationData[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RelativeRotationData[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AbsoluteRotationData[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleData[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDecoPlacementState PlacementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInFallbackPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallbackTinyScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortDecoPlacementQueryResults::Type> CanPlaceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CustomPlacementText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredRelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DirectionChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridSnapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator FreeFloorPlacementRelativeRotationOffset;
    
public:
    AFortDecoHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInValidPlacementSpot(bool bTestingForVisuals) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInFallbackPosition() const;
    
};

