#pragma once
#include "CoreMinimal.h"
#include "PrimaryContentSetup.generated.h"

USTRUCT(BlueprintType)
struct FPrimaryContentSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowBottomBar;
    
    FORTNITEUI_API FPrimaryContentSetup();
};

