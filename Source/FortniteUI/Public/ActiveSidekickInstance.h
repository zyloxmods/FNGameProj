#pragma once
#include "CoreMinimal.h"
#include "ActiveSidekickInstance.generated.h"

class USidekickDisplayWidget;

USTRUCT(BlueprintType)
struct FActiveSidekickInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USidekickDisplayWidget* Widget;
    
    FORTNITEUI_API FActiveSidekickInstance();
};

