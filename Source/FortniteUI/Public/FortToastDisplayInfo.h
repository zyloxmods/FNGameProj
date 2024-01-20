#pragma once
#include "CoreMinimal.h"
#include "EFortToastType.h"
#include "FortToastDisplayInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFortToastDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortToastType Type;
    
    FORTNITEUI_API FFortToastDisplayInfo();
};

