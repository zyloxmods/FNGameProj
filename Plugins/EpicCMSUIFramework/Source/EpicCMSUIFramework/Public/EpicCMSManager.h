#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EpicCMSManager.generated.h"

UCLASS(Blueprintable)
class EPICCMSUIFRAMEWORK_API UEpicCMSManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CmsEndpointOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRefreshing;
    
public:
    UEpicCMSManager();
};

