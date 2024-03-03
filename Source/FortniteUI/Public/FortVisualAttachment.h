#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SizeBox.h"
#include "FortVisualAttachment.generated.h"

UCLASS(Blueprintable)
class UFortVisualAttachment : public USizeBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ContentAnchor;
    
    UFortVisualAttachment();
};

