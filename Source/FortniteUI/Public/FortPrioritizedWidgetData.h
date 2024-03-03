#pragma once
#include "CoreMinimal.h"
#include "EFortPrioritizedWidgetContestedBehavior.h"
#include "EFortPrioritizedWidgetPriority.h"
#include "FortPrioritizedWidgetData.generated.h"

USTRUCT(BlueprintType)
struct FFortPrioritizedWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPrioritizedWidgetPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPrioritizedWidgetContestedBehavior WhenContesting;
    
    FORTNITEUI_API FFortPrioritizedWidgetData();
};

