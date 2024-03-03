#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SizeBox.h"
#include "CommonVisualAttachment.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UCommonVisualAttachment : public USizeBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ContentAnchor;
    
    UCommonVisualAttachment();
};

