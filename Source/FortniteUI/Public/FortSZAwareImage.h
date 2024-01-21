#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "FortSZAwareImage.generated.h"

UCLASS(Blueprintable)
class UFortSZAwareImage : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AnchorLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AnchorRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AnchorTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AnchorBottom;
    
    UFortSZAwareImage();
};

