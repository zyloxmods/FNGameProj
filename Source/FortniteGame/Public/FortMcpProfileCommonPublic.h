#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "FortMcpProfile.h"
#include "FortMcpProfileCommonPublic.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpProfileCommonPublic : public UFortMcpProfile {
    GENERATED_BODY()
public:
    UFortMcpProfileCommonPublic();
/*    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetHomebaseName(const FString& HomebaseName, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetHomebaseBanner(const FString& HomebaseBannerIconId, const FString& HomebaseBannerColorId, UPARAM(NotReplicated) FClientUrlContext& Context);
    */
};

