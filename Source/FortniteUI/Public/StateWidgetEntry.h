#pragma once
#include "CoreMinimal.h"
#include "EFortNamedBundle.h"
#include "StateWidgetEntry.generated.h"

class UFortUIStateWidget_NUI;

USTRUCT(BlueprintType)
struct FStateWidgetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortUIStateWidget_NUI> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortNamedBundle Bundle;
    
    FORTNITEUI_API FStateWidgetEntry();
};

