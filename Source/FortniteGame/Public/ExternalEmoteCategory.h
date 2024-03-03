#pragma once
#include "CoreMinimal.h"
#include "EmoteActionBinding.h"
#include "ExternalEmoteCategory.generated.h"

USTRUCT(BlueprintType)
struct FExternalEmoteCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryTitleMultipage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEmoteActionBinding> Emotes;
    
    FORTNITEGAME_API FExternalEmoteCategory();
};

