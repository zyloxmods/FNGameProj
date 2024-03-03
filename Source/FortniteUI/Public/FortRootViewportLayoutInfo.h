#pragma once
#include "CoreMinimal.h"
#include "FortRootViewportLayoutInfo.generated.h"

class UFortLocalPlayer;
class UUserWidget;

USTRUCT(BlueprintType)
struct FFortRootViewportLayoutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortLocalPlayer* LocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* RootLayout;
    
    FORTNITEUI_API FFortRootViewportLayoutInfo();
};

