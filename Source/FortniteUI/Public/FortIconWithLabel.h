#pragma once
#include "CoreMinimal.h"
#include "EFortBrushSize.h"
#include "Components/Widget.h"
#include "Templates/SubclassOf.h"
#include "FortIconWithLabel.generated.h"

class UCommonTextStyle;

UCLASS(Abstract, Blueprintable)
class UFortIconWithLabel : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldShowIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldCollapseIconWhenNotShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBrushSize::Type> IconBrushSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldShowLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> LabelTextStyle;
    
    UFortIconWithLabel();
};

