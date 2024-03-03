#pragma once
#include "CoreMinimal.h"
#include "FortComicPanelReference.generated.h"

USTRUCT(BlueprintType)
struct FFortComicPanelReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PanelIndex;
    
    COMICREADER_API FFortComicPanelReference();
};

