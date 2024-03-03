#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortStoreBanner.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortStoreBanner : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_BannerMessage;
    
public:
    UFortStoreBanner();
};

