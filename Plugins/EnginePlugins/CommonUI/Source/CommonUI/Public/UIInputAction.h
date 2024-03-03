#pragma once
#include "CoreMinimal.h"
#include "UIActionKeyMapping.h"
#include "UIActionTag.h"
#include "UIInputAction.generated.h"

USTRUCT(BlueprintType)
struct FUIInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIActionTag ActionTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultDisplayName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIActionKeyMapping> KeyMappings;
    
    COMMONUI_API FUIInputAction();
};

