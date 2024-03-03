#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "EFortWorldMarkerType.h"
#include "FortContextualTutorialDefinition.h"
#include "FortContextualTutorialDefinition_MarkLocation.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorialDefinition_MarkLocation : public UFortContextualTutorialDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortWorldMarkerType MarkerType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MobilePosition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> MobileHorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> MobileVerticalAlignment;
    
public:
    UFortContextualTutorialDefinition_MarkLocation();
};

