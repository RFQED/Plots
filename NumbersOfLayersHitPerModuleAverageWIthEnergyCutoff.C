{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 16 08:12:51 2016) by ROOT version5.34/25
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",262,226,538,323);
   Canvas_1->Range(-0.625,-0.05766369,5.625,0.5327314);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1F *LayersHitAverage = new TH1F("LayersHitAverage","Straws Layers Hit Per Module",5,0,5);
   LayersHitAverage->SetBinContent(1,0.4512007);
   LayersHitAverage->SetBinContent(2,0.02279605);
   LayersHitAverage->SetBinContent(3,0.0678454);
   LayersHitAverage->SetBinContent(4,0.2211349);
   LayersHitAverage->SetBinContent(5,0.237023);
   LayersHitAverage->SetEntries(5);
   LayersHitAverage->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   LayersHitAverage->SetLineColor(ci);
   LayersHitAverage->GetXaxis()->SetTitle("Number of Layers Hit Per Module");
   LayersHitAverage->GetXaxis()->SetNdivisions(6);
   LayersHitAverage->GetXaxis()->SetLabelFont(42);
   LayersHitAverage->GetXaxis()->SetLabelSize(0.035);
   LayersHitAverage->GetXaxis()->SetTitleSize(0.035);
   LayersHitAverage->GetXaxis()->SetTitleFont(42);
   LayersHitAverage->GetYaxis()->SetTitle("Probability");
   LayersHitAverage->GetYaxis()->SetLabelFont(42);
   LayersHitAverage->GetYaxis()->SetLabelSize(0.035);
   LayersHitAverage->GetYaxis()->SetTitleSize(0.035);
   LayersHitAverage->GetYaxis()->SetTitleFont(42);
   LayersHitAverage->GetZaxis()->SetLabelFont(42);
   LayersHitAverage->GetZaxis()->SetLabelSize(0.035);
   LayersHitAverage->GetZaxis()->SetTitleSize(0.035);
   LayersHitAverage->GetZaxis()->SetTitleFont(42);
   LayersHitAverage->Draw("");
   
   TPaveText *pt = new TPaveText(0.2793258,0.9348119,0.7206742,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Straws Layers Hit Per Module");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
