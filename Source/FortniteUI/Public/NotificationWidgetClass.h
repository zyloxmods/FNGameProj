#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NotificationWidgetClass.generated.h"

class UFortNotificationEntry;

USTRUCT(BlueprintType)
struct FNotificationWidgetClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortNotificationEntry> NotificationWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialPoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanIncreasePoolSizeAtRunTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortNotificationEntry*> WidgetPool;
    
    FORTNITEUI_API FNotificationWidgetClass();
};

