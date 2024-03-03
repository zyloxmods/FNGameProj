#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "McpProfile.h"
#include "FortMcpProfile.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpProfile : public UMcpProfile {
    GENERATED_BODY()
public:
    UFortMcpProfile();
  //  UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
//    void RemoveGiftBox(const TArray<FString>& GiftBoxItemIds, UPARAM(NotReplicated) FClientUrlContext& Context);
    
private:
   // UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
 //   void MarkItemSeen(const TArray<FString>& ItemIds, UPARAM(NotReplicated) FClientUrlContext& Context);
    
};

