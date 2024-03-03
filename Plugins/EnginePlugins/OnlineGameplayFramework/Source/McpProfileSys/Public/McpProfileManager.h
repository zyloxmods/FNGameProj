#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ProfileGroupEntry.h"
#include "McpProfileManager.generated.h"

UCLASS(Blueprintable, Config=DefaultEngine)
class MCPPROFILESYS_API UMcpProfileManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProfileGroupEntry> ServerProfileGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProfileGroupEntry> ClientProfileGroups;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxItemsProcessedInInitialUpdatesPerTick;
    
public:
    UMcpProfileManager();
};

