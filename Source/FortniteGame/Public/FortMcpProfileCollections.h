#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "DedicatedServerUrlContext.h"
#include "McpProfile.h"
#include "EFortCollectedState.h"
#include "FortMcpCollectionsBulkUpdateEntry.h"
#include "FortMcpProfileCollections.generated.h"

class UFortCollectionData;
class UFortCollectionsTaskManager;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpProfileCollections : public UMcpProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UFortCollectionData*> DataTables;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCollectionsTaskManager* TaskManager;
    
public:
    UFortMcpProfileCollections();
  //  UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
//    void BulkUpdateCollections(const TArray<FFortMcpCollectionsBulkUpdateEntry>& Items, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
   // UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
   // void AddToCollection(const FString& Category, const FString& Variant, const TArray<FString>& ContextTags, const FJsonObjectWrapper& Properties, EFortCollectedState SeenState, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
};

