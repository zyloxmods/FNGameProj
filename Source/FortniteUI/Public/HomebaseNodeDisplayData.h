#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HomebaseNodeDisplayData.generated.h"

class UMediaSource;
class UTexture2D;

USTRUCT(BlueprintType)
struct FHomebaseNodeDisplayData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> LargePreviewImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SmallPreviewImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* PreviewVideoMediaSource;
    
    FORTNITEUI_API FHomebaseNodeDisplayData();
};

